import { Models } from 'appwrite';
import Loader from './Loader';
import GridPostList from './GridPostList ';

type SearchResultProps = {
    isSearchFetching: boolean;
    searchedPosts: Models.Document[];
};

const SearchResults = ({ isSearchFetching, searchedPosts }: SearchResultProps) => {
    if (isSearchFetching) return <Loader />;
    if (searchedPosts.length > 0) return <GridPostList posts={searchedPosts} />;
    return <div>SearchResults</div>;
};

export default SearchResults;
